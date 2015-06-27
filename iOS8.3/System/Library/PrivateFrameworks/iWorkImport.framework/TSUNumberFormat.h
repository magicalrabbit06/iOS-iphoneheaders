/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUNumberFormatting.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet, NSUUID;

@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying> {

	int mValueType;
	NSString* mFormatString;
	unsigned short mDecimalPlaces;
	NSString* mCurrencyCode;
	char mUseAccountingStyle;
	int mNegativeStyle;
	char mShowThousandsSeparator;
	int mFractionAccuracy;
	char mFormatStringRequiresSuppressionOfMinusSign;
	char mUseScientificFormattingAutomatically;
	char mIgnoreDecimalPlacesForZeroValue;
	NSString* mPrefixString;
	NSString* mSuffixString;
	unsigned char mBase;
	unsigned short mBasePlaces;
	char mBaseUseMinusSign;
	char mIsCustom;
	double mScaleFactor;
	char mFormatStringContainsTabCharacter;
	char mFormatContainsSpecialTokens;
	char mFormatContainsIntegerToken;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	char mRequiresFractionReplacement;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	unsigned short mIndexFromRightOfLastDigitPlaceholder;
	char mIsTextFormat;
	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	NSString* mFormatName;
	NSUUID* mCustomFormatKey;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
+(id)numberFormatFromFormatStruct:(SCD_Struct_TS48)arg1 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(char)arg14 isCustom:(char)arg15 formatName:(id)arg16 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(char)arg14 isCustom:(char)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(char)arg23 formatName:(id)arg24 customFormatKey:(id)arg25 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(char)arg11 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(char)arg5 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(id)customFormatKey;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(char)arg3 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(char)arg4 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 ;
-(void)saveToArchive:(FormatStructArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
-(SCD_Struct_TS48)formatStructAndCustomFormatData:(id*)arg1 ;
-(char)isCustom;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned short)base;
-(id)formatString;
-(id)stringFromString:(id)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(char)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(char)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(char)arg11 ;
-(unsigned short)decimalPlaces;
-(id)currencyCode;
-(char)showThousandsSeparator;
-(char)usesAccountingStyle;
-(int)negativeStyle;
-(int)fractionAccuracy;
-(char)hasValidDecimalPlaces;
-(id)numberFormatBySettingNegativeStyle:(int)arg1 ;
-(id)numberFormatBySettingUseAccountingStyle:(char)arg1 ;
-(id)formatName;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(char)isTextFormat;
-(char)canFormatText;
-(char)usesTextFormatForValue:(double)arg1 ;
-(char)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(char)baseUseMinusSign;
-(void)setFormatName:(id)arg1 ;
-(char)usesTabs;
-(char)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1 ;
-(char)isEquivalent:(id)arg1 ;
-(id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(char)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(char)arg13 formatName:(id)arg14 ;
-(id)prefixString;
-(char)useScientificFormattingAutomatically;
-(void)setUseScientificFormattingAutomatically:(char)arg1 ;
-(char)ignoreDecimalPlacesForZeroValue;
-(void)setIgnoreDecimalPlacesForZeroValue:(char)arg1 ;
-(id)fractionStringFromDouble:(double)arg1 ;
-(id)baseStringFromDouble:(double)arg1 ;
-(int)valueType;
@end
