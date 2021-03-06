/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ActivityTraceMessage : NSObject {

	unsigned _offset;
	unsigned long long _timeStamp;
	NSString* _imageUUIDString;
	NSString* _imagePath;
	NSString* _traceMessage;

}

@property (readonly) unsigned long long timeStamp;                   //@synthesize timeStamp=_timeStamp - In the implementation block
@property (retain,readonly) NSString * imageUUIDString;              //@synthesize imageUUIDString=_imageUUIDString - In the implementation block
@property (retain,readonly) NSString * imagePath;                    //@synthesize imagePath=_imagePath - In the implementation block
@property (assign) unsigned offset;                                  //@synthesize offset=_offset - In the implementation block
@property (retain,readonly) NSString * traceMessage;                 //@synthesize traceMessage=_traceMessage - In the implementation block
-(id)initWithTimeStamp:(unsigned long long)arg1 UUIDBytes:(const char*)arg2 imagePath:(const char*)arg3 offset:(unsigned)arg4 traceMessage:(char*)arg5 ;
-(NSString *)traceMessage;
-(NSString *)imageUUIDString;
-(void)dealloc;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(unsigned long long)timeStamp;
-(NSString *)imagePath;
@end

