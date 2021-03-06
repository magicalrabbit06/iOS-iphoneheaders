/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary, NSMutableArray, PFZipEndOfCentralDirectoryRecord;

@interface _PFZipFileArchive : NSObject {

	NSDictionary* _contents;
	NSData* _data;
	id _provider;
	long long _desc;
	NSString* _path;
	NSArray* _names;
	NSDictionary* _properties;
	NSMutableDictionary* _cachedContents;
	void* _reserved;
	struct {
		unsigned providerSuppliesContents : 1;
		unsigned providerSuppliesStreams : 1;
		unsigned providerSuppliesProperties : 1;
		unsigned noContentsCaching : 1;
		unsigned fileOpen : 1;
		unsigned reserved : 27;
	}  _zFlags;
	void** _reserved2[5];
	NSMutableDictionary* _entryNameToData;
	NSMutableDictionary* _entryNameToLocalFileHeader;
	NSMutableDictionary* _entryNameToCentralDirectoryFileHeader;
	NSMutableArray* _localFileHeaders;
	NSMutableArray* _centralDirectoryEntries;
	PFZipEndOfCentralDirectoryRecord* _endRecord;

}

@property (nonatomic,readonly) NSArray * entryNames; 
+(unsigned)readInt32FromBytes:(const char*)arg1 offset:(unsigned long long*)arg2 ;
+(void)writeInt64:(unsigned long long)arg1 toData:(id)arg2 ;
+(void)writeInt32:(unsigned)arg1 toData:(id)arg2 ;
+(void)writeInt16:(unsigned short)arg1 toData:(id)arg2 ;
+(unsigned short)readInt16FromBytes:(const char*)arg1 offset:(unsigned long long*)arg2 ;
+(id)createStringFromBytes:(const char*)arg1 offset:(unsigned long long*)arg2 length:(unsigned long long)arg3 ;
-(BOOL)load:(id*)arg1 ;
-(int)openArchiveFile:(id*)arg1 ;
-(BOOL)addLocalFileHeaderWithBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)addCentralDirectoryEndRecordWithBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)addCentralDirectoryHeaderWithBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)compareBytes:(const char*)arg1 length:(unsigned)arg2 withLocalFileHeader:(id)arg3 ;
-(BOOL)readDataForLocalFileHeader:(id)arg1 fromBytes:(const void*)arg2 error:(id*)arg3 ;
-(id)createDataForEntryName:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSArray *)entryNames;
-(id)contentsForEntryName:(id)arg1 ;
-(id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 ;
-(id)streamForEntryName:(id)arg1 ;
-(BOOL)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)propertiesForEntryName:(id)arg1 ;
-(id)archiveStream;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isValid;
-(id)archiveData;
-(void)finalize;
@end

