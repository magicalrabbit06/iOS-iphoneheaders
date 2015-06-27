/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MSVSystemDialogResponse : NSObject {

	int _buttonIdentifier;
	NSArray* _textFieldValues;

}

@property (nonatomic,readonly) int buttonIdentifier;                   //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * textFieldValues;              //@synthesize textFieldValues=_textFieldValues - In the implementation block
-(id)description;
-(id)initWithIdentifier:(int)arg1 textFieldValues:(id)arg2 ;
-(int)buttonIdentifier;
-(NSArray *)textFieldValues;
@end
