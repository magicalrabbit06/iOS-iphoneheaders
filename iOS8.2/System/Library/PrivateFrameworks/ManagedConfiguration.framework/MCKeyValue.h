/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MCKeyValue : NSObject {

	NSString* _key;
	id _value;
	unsigned _valueType;

}

@property (nonatomic,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned valueType;              //@synthesize valueType=_valueType - In the implementation block
-(id)value;
-(NSString *)key;
-(id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithData:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithDate:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setDate:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithValue:(id)arg1 localizedKey:(id)arg2 ;
-(void)setData:(id)arg1 localizedKey:(id)arg2 ;
-(void)setValue:(id)arg1 localizedKey:(id)arg2 ;
-(unsigned)valueType;
@end

