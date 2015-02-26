/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>
#import <iWorkImport/TSUStreamWriteChannel.h>
#import <iWorkImport/TSURandomWriteChannel.h>

@protocol OS_dispatch_io;
@class NSObject, NSString;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {

	NSObject*<OS_dispatch_io> _channel;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initForStreamWritingURL:(id)arg1 error:(id*)arg2 ;
-(void)writeData:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(/*^block*/id)arg3 ;
-(id)initForRandomWritingURL:(id)arg1 error:(id*)arg2 ;
-(id)initForReadingURL:(id)arg1 error:(id*)arg2 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5 ;
-(id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long long)arg1 channel:(id)arg2 ;
-(id)createRandomAccessChannel;
-(void)dealloc;
-(BOOL)isValid;
-(void)close;
@end
