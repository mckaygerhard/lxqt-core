/* 
 * File:   ModuleDescriptor.h
 * Author: alexis
 *
 * Created on 4 de septiembre de 2013, 12:36
 */

#ifndef MODULEDESCRIPTOR_H
#define	MODULEDESCRIPTOR_H

#include <QString>
#include <QBool>

/* Description: This class holds the information of a module.
 *      This information is loaded from the .desktop files 
 *      that describes each module.
 *      
 */
class ModuleDescriptor {
public:
    // Create an empthy descriptor
    ModuleDescriptor();
    // Load a descriptor from file
    ModuleDescriptor(QString path);

    //void save(QString path) const;
    virtual ~ModuleDescriptor();

    
    QString getClass() const;
    QString getLibName() const;

    // Returns the full name of the module
    QString getName() const;
    QString getIconPath() const;
    // Returns a long description of the module
    QString getDescription() const;

    QBool isEnabled() const;

    void setDescription(QString description);
    void setIconPath(QString iconPath);
    void setName(QString name);
    void setLibName(QString path);
    void setClass(QString className);

    void setEnabled(QBool enabled);

    /* Description: Enable or disable the execution
     *  of the module at startup atending to the value
     *  of m_enabled. 
     */
    void commit() const;

private:
    QString m_class;
    QString m_name;
    QString m_description;
    QString m_iconPath;
    QString m_libName;
    QBool m_enabled;

};

#endif	/* MODULEDESCRIPTOR_H */

