/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMLoggingAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _MarcoLogCompressor : NSObject {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)compressDirectory:(id)arg1 intoArchive:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
@end
