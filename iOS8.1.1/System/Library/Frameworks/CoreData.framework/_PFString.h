/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSString.h>

@interface _PFString : NSString {

	int _cd_rc;
	unsigned _length;
	id _sourceData;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(const char*)cString;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(void)getCString:(char*)arg1 ;
-(unsigned long long)cStringLength;
-(id)retain;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
@end
