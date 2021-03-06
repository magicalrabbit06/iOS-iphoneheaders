/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group, TSUReadChannel;
@class NSObject;

@interface TSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<TSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                          //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<TSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(id<TSUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
-(void)beginAccess;
-(void)endAccess;
-(void)dealloc;
-(id)init;
-(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)arg1 ;
@end

