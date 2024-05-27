#!/usr/bin/env bash

# Go back to original location at exit
INIT_CWD=$(pwd)
trap "[[ ${INIT_CWD} != $(pwd) ]] && cd \"${INIT_CWD}\" &> /dev/null" ERR EXIT

# Absolute paths to this script
SCRIPT_FILE_PATH=$(readlink -f ${0})
SCRIPT_DIR_PATH=$(dirname "${SCRIPT_FILE_PATH}")

QTCREATOR_SHARE_DIR="$(readlink -f ${APPDATA:-$HOME/.config})/QtProject/qtcreator"

# Copy wizards
cp -r "${SCRIPT_DIR_PATH}/templates" "${QTCREATOR_SHARE_DIR}/"

# Copy external tools
mkdir -p "${QTCREATOR_SHARE_DIR}/externaltools"
EXCLUDE_DIR=
case "$OSTYPE" in
  darwin*)  EXCLUDE_DIR="win" ;;
  win*)     EXCLUDE_DIR="mac" ;;
  msys*)    EXCLUDE_DIR="mac" ;;
  *)        ;;
esac
find "${SCRIPT_DIR_PATH}/externaltools" -type f ! -path "*/${EXCLUDE_DIR}/*" -exec cp "{}" "${QTCREATOR_SHARE_DIR}/externaltools/" \;

# Copy code snippets
# TODO: inject snippets to existing file
cp -r "${SCRIPT_DIR_PATH}/snippets" "${QTCREATOR_SHARE_DIR}/"

# Copy debugger extensions
# TODO: inject functions to existing file
cp -r "${SCRIPT_DIR_PATH}/debugger" "${QTCREATOR_SHARE_DIR}/"
