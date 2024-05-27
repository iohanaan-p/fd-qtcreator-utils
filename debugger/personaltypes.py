# Check http://doc.qt.io/qtcreator/creator-debugging-helpers.html
# for more details or look at qttypes.py, stdtypes.py, boosttypes.py
# for more complex examples.

from dumper import Children, SubItem


def qdump__StringAtom(d, value):
    qdump__Core__StringAtom(d, value)


def qdump__Core__StringAtom(d, value):
    entry = value["_entry"]
    data = entry["data"]
    size = entry["size"]
    hash_value = entry["hash"]

    d.putNumChild(2)
    with Children(d):
        with SubItem(d, "data"):
            d.putType(f"char[{int(size)}]")
            d.putCharArrayHelper(data.laddress, int(size),
                                 d.createType("char"), d.currentItemFormat())
        d.putSubItem("hash", hash_value)


def qdump__EncryptedVar(d, value):
    qdump__Core__EncryptedVar(d, value)


def qdump__Core__EncryptedVar(d, value):
    _value = value["_value"].data()
    _key = value["_key"].data()

    result = bytes([a ^ b for (a, b) in zip(_value, _key)])
    d.putValue(int.from_bytes(result, byteorder="little"))
