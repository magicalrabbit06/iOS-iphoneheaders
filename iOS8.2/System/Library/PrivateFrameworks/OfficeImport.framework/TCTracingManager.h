/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TSMTraceBuffer;

@interface TCTracingManager : NSObject {

	TSMTraceBuffer* mBuffer;
	unsigned mCount;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
-(oneway void)release;
@end
