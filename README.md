# Набор утилит и дополнений для Qt Creator

Небольшой набор утилит и дополнений для повышения удобства работы в Qt Creator.
Все утилиты по большей части заточены для использования в проекте [Fishdom](https://github.com/Playrix/fishdom), но их легко можно адаптировать под любой другой проект.

## Wizards

Набор wizard'ов для быстрого создания VSO классов унаследованных от:

- `Visual::Behaviour`;
- `Visual::Asset`;

## External Tools

Набор готовых команд, которые можно вызывать напрямую через интерфейс IDE.

### Список доступных команд

Команды вызываются через меню **Tools** -> **External**.

- **Autofix** - запустить автофикс исходников проекта, используется скрипт `autofix.command`;
- **Prepare project env** - подготовить окружение проекта, используется скрипт `PrepareAll.command`;
- **Restore Save** - восстановить сохранку их бэкапа;
- **Backup Save** - создать бэкап сохранки;
- **Reset Game** - полный сброс игры, используется скрипт `resetGame.cmd`;
- **Remove PDB** - удалить файл `Fishdom.pdb`. Иногда при остановке сборки файл может оказаться поврежденным и без его удаления следующая сборка не пройдет;
- **VS Code** - открыть корневую директорию текущего проекта в **Visual Studio Code**;
- **Windows Terminal** - запустить **Windows Terminal** в корневой директории текущего проекта.

### Установка External Tools

Для установки необходимо скопировать папку `externaltools` в `%APPDATA%\QtProject\qtcreator`, либо выполнить в `bash`:

```bash
cp -r externaltools "$(readlink -f ${APPDATA})/QtProject/qtcreator/"
```
