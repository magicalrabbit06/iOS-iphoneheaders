/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject {

	NSString* _name;
	VMUSourceInfo* _sourceInfo;

}
-(void)dealloc;
-(id)name;
-(id)initWithSymbolicator:(CSTypeRef)arg1 address:(unsigned long long)arg2 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
@end
