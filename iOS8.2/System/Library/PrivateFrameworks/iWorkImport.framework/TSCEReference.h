/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCEReference : NSObject {

	SCD_Struct_TS330* mRef;
	NSString* mOverrideText;
	NSString* mOverrideTextAsTyped;
	unsigned char mStickyBits;
	char mWasConstructedViaNames;

}
-(id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS275*)rangeReference;
-(id)initWithRangeReference:(SCD_Struct_TS275*)arg1 ;
-(CFUUIDRef)tableID;
-(id)initWithCellReference:(SCD_Struct_TS281*)arg1 ;
-(void)setWasConstructedViaNames:(char)arg1 ;
-(void)setOverrideText:(id)arg1 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(void)setOverrideTextAsTyped:(id)arg1 ;
-(unsigned char)stickyBits;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(char)arg5 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(char)arg5 ;
-(id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 ;
-(char)wasConstructedViaNames;
-(SCD_Struct_TS331*)cReference;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(char)arg2 ;
-(id)overrideText;
-(id)overrideTextAsTyped;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
@end
