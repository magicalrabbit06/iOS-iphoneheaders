/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {

	NSString* _repeatedSpokenFeedbackString;
	NSString* _sequenceTag;
	NSMutableDictionary* _knownValues;
	NSMutableDictionary* _knownPhoneticValues;
	NSMutableDictionary* _ambiguousValues;
	NSMutableDictionary* _ambiguousPhoneticValues;
	void* _context;

}
-(void)dealloc;
-(void)setKeywords:(id)arg1 ;
-(int)completionType;
-(bool)_keywordIndexChanged;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(void)setRepeatedSpokenFeedbackString:(id)arg1 ;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(void)setSequenceTag:(id)arg1 ;
-(id)knownValueForClassIdentifier:(id)arg1 ;
-(void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)knownValuesForClassIdentifier:(id)arg1 ;
-(void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)ambiguousValuesForClassIdentifier:(id)arg1 ;
-(void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)_keywords;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS4*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
@end

