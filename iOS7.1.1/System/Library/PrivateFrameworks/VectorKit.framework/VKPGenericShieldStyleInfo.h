/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {

	SCD_Struct_VK57* _textDropShadowOffsets;
	unsigned _backgroundColor;
	unsigned _borderColor;
	int _style;
	unsigned _textColor;
	unsigned _textDropShadowColor;
	float _textDropShadowSize;
	unsigned _textStrokeColor;
	float _textStrokeSize;
	SCD_Struct_VK166 _has;

}

@property (assign,nonatomic) bool hasStyle; 
@property (assign,nonatomic) int style;                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) bool hasBackgroundColor; 
@property (assign,nonatomic) unsigned backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) bool hasBorderColor; 
@property (assign,nonatomic) unsigned borderColor;                                         //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) bool hasTextColor; 
@property (assign,nonatomic) unsigned textColor;                                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) bool hasTextStrokeSize; 
@property (assign,nonatomic) float textStrokeSize;                                         //@synthesize textStrokeSize=_textStrokeSize - In the implementation block
@property (assign,nonatomic) bool hasTextStrokeColor; 
@property (assign,nonatomic) unsigned textStrokeColor;                                     //@synthesize textStrokeColor=_textStrokeColor - In the implementation block
@property (nonatomic,readonly) unsigned long long textDropShadowOffsetsCount; 
@property (nonatomic,readonly) float* textDropShadowOffsets; 
@property (assign,nonatomic) bool hasTextDropShadowSize; 
@property (assign,nonatomic) float textDropShadowSize;                                     //@synthesize textDropShadowSize=_textDropShadowSize - In the implementation block
@property (assign,nonatomic) bool hasTextDropShadowColor; 
@property (assign,nonatomic) unsigned textDropShadowColor;                                 //@synthesize textDropShadowColor=_textDropShadowColor - In the implementation block
-(void)dealloc;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(unsigned)backgroundColor;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTextColor:(unsigned)arg1 ;
-(int)style;
-(unsigned)textColor;
-(void)setBorderColor:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)borderColor;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)textStrokeSize;
-(unsigned)textStrokeColor;
-(unsigned long long)textDropShadowOffsetsCount;
-(float)textDropShadowOffsetAtIndex:(unsigned long long)arg1 ;
-(float)textDropShadowSize;
-(unsigned)textDropShadowColor;
-(void)clearTextDropShadowOffsets;
-(void)addTextDropShadowOffset:(float)arg1 ;
-(void)setHasStyle:(bool)arg1 ;
-(bool)hasStyle;
-(void)setHasBackgroundColor:(bool)arg1 ;
-(bool)hasBackgroundColor;
-(void)setHasBorderColor:(bool)arg1 ;
-(bool)hasBorderColor;
-(void)setHasTextColor:(bool)arg1 ;
-(bool)hasTextColor;
-(void)setTextStrokeSize:(float)arg1 ;
-(void)setHasTextStrokeSize:(bool)arg1 ;
-(bool)hasTextStrokeSize;
-(void)setTextStrokeColor:(unsigned)arg1 ;
-(void)setHasTextStrokeColor:(bool)arg1 ;
-(bool)hasTextStrokeColor;
-(float*)textDropShadowOffsets;
-(void)setTextDropShadowOffsets:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setTextDropShadowSize:(float)arg1 ;
-(void)setHasTextDropShadowSize:(bool)arg1 ;
-(bool)hasTextDropShadowSize;
-(void)setTextDropShadowColor:(unsigned)arg1 ;
-(void)setHasTextDropShadowColor:(bool)arg1 ;
-(bool)hasTextDropShadowColor;
@end

