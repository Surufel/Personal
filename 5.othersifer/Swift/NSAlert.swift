// Sifer Aseph
// NSAlert

import foundation

let alert = NSAlert()
alert.messageText = "question"
alert.informativeText = "text"
alert.alertStyle = NSAlertStyle.warning
alert.addButton(withTitle: "OK")
alert.addButton(withTitle: "Cancel")
alert.runModal()
