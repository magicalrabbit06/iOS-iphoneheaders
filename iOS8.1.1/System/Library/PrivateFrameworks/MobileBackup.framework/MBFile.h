/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBCoding.h>

@class MBFileID, MBDomain, NSString, NSData, NSDictionary, NSDate;

@interface MBFile : NSObject <MBCoding> {

	unsigned long long _snapshotID;
	MBFileID* _fileID;
	MBDomain* _domain;
	MBDomain* _nonRedirectedDomain;
	NSString* _relativePath;
	NSString* _absolutePath;
	char* _absolutePathFSR;
	BOOL _committed;
	BOOL _deleted;
	long long _priority;
	NSString* _target;
	NSData* _digest;
	long long _keybagID;
	NSData* _encryptionKey;
	unsigned long long _encryptionKeyVersion;
	unsigned long long _decryptedSize;
	unsigned short _mode;
	unsigned long long _inodeNumber;
	unsigned _userID;
	unsigned _groupID;
	long long _lastModified;
	long long _lastStatusChange;
	long long _birth;
	long long _size;
	int _protectionClass;
	NSDictionary* _extendedAttributes;

}

@property (assign,nonatomic) unsigned long long snapshotID;                            //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) MBFileID * fileID;                                      //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) MBDomain * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) MBDomain * nonRedirectedDomain;                         //@synthesize nonRedirectedDomain=_nonRedirectedDomain - In the implementation block
@property (nonatomic,readonly) NSString * relativePath;                                //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,readonly) NSString * absolutePath;                                //@synthesize absolutePath=_absolutePath - In the implementation block
@property (nonatomic,readonly) const char* absolutePathFSR; 
@property (assign,getter=isCommitted,nonatomic) BOOL committed;                        //@synthesize committed=_committed - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                            //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) NSString * aggregateDictionaryGroup; 
@property (assign,nonatomic) long long priority;                                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSData * digest;                                          //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) long long keybagID;                                       //@synthesize keybagID=_keybagID - In the implementation block
@property (nonatomic,retain) NSData * encryptionKey;                                   //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign,nonatomic) unsigned long long encryptionKeyVersion;                  //@synthesize encryptionKeyVersion=_encryptionKeyVersion - In the implementation block
@property (assign,nonatomic) unsigned long long decryptedSize;                         //@synthesize decryptedSize=_decryptedSize - In the implementation block
@property (assign,nonatomic) unsigned short mode;                                      //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSString * modeString; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,readonly) unsigned short permissions; 
@property (nonatomic,readonly) NSString * permissionsString; 
@property (getter=isDirectory,nonatomic,readonly) BOOL directory; 
@property (getter=isRegularFile,nonatomic,readonly) BOOL regularFile; 
@property (getter=isSymbolicLink,nonatomic,readonly) BOOL symbolicLink; 
@property (getter=isSupportedType,nonatomic,readonly) BOOL supportedType; 
@property (assign,nonatomic) unsigned long long inodeNumber;                           //@synthesize inodeNumber=_inodeNumber - In the implementation block
@property (assign,nonatomic) unsigned userID;                                          //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) unsigned groupID;                                         //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long long lastModified;                                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (assign,nonatomic) long long lastStatusChange;                               //@synthesize lastStatusChange=_lastStatusChange - In the implementation block
@property (nonatomic,readonly) NSDate * lastStatusChangeDate; 
@property (assign,nonatomic) long long birth;                                          //@synthesize birth=_birth - In the implementation block
@property (nonatomic,readonly) NSDate * birthDate; 
@property (assign,nonatomic) long long size;                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int protectionClass;                                      //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSDictionary * extendedAttributes;                        //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(id)symbolicLinkTargetWithPathFSR:(const char*)arg1 error:(id*)arg2 ;
+(id)fileWithDomain:(id)arg1 relativePath:(id)arg2 ;
+(id)stringWithType:(unsigned short)arg1 ;
+(id)fileWithDecoder:(id)arg1 database:(id)arg2 ;
+(id)symbolicLinkTargetWithPath:(id)arg1 error:(id*)arg2 ;
-(void)setSnapshotID:(unsigned long long)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(long long)keybagID;
-(void)setKeybagID:(long long)arg1 ;
-(NSData *)encryptionKey;
-(unsigned long long)inodeNumber;
-(void)setInodeNumber:(unsigned long long)arg1 ;
-(void)setUserID:(unsigned)arg1 ;
-(long long)lastStatusChange;
-(void)setLastStatusChange:(long long)arg1 ;
-(long long)birth;
-(void)setBirth:(long long)arg1 ;
-(void)setProtectionClass:(int)arg1 ;
-(unsigned long long)encryptionKeyVersion;
-(void)setEncryptionKeyVersion:(unsigned long long)arg1 ;
-(unsigned long long)decryptedSize;
-(void)setDecryptedSize:(unsigned long long)arg1 ;
-(BOOL)isStatusChangedComparedToFile:(id)arg1 ;
-(const char*)absolutePathFSR;
-(id)backupSymbolicLinkTarget;
-(void)setStat:(stat*)arg1 ;
-(id)restoreEmptyRegularFileAtPath:(id)arg1 ;
-(id)restoreDirectoryAtPath:(id)arg1 settingDataProtection:(BOOL)arg2 ;
-(id)restoreSymbolicLinkAtPath:(id)arg1 ;
-(id)restoreRegularFileAtPath:(id)arg1 ;
-(BOOL)isSupportedType;
-(id)initWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithDecoder:(id)arg1 database:(id)arg2 ;
-(NSString *)modeString;
-(NSDate *)lastStatusChangeDate;
-(NSDate *)birthDate;
-(NSString *)permissionsString;
-(id)setProtectionClassAtPath:(id)arg1 ;
-(id)restoreLastModifiedAtPathFSR:(const char*)arg1 ;
-(id)initWithDecoder:(id)arg1 ;
-(void)encode:(id)arg1 ;
-(void)stat:(stat*)arg1 ;
-(MBDomain *)nonRedirectedDomain;
-(unsigned short)permissions;
-(NSData *)digest;
-(void)setDigest:(NSData *)arg1 ;
-(void)setLastModified:(long long)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)isCommitted;
-(void)setCommitted:(BOOL)arg1 ;
-(void)dealloc;
-(long long)size;
-(id)description;
-(id)debugDescription;
-(void)setTarget:(NSString *)arg1 ;
-(unsigned short)type;
-(MBDomain *)domain;
-(NSString *)target;
-(void)setSize:(long long)arg1 ;
-(void)setMode:(unsigned short)arg1 ;
-(unsigned short)mode;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(BOOL)isRegularFile;
-(NSString *)typeString;
-(NSString *)absolutePath;
-(MBFileID *)fileID;
-(BOOL)isDirectory;
-(int)protectionClass;
-(unsigned)userID;
-(NSString *)aggregateDictionaryGroup;
-(unsigned long long)snapshotID;
-(NSDictionary *)extendedAttributes;
-(void)setExtendedAttributes:(NSDictionary *)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)isDeleted;
-(unsigned)groupID;
-(void)setGroupID:(unsigned)arg1 ;
-(long long)lastModified;
-(NSDate *)lastModifiedDate;
-(NSString *)relativePath;
@end

