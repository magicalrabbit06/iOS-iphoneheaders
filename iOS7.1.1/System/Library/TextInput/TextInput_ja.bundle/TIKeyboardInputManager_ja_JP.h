/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@class TIWordSearch, TIWordSearchCandidateResultSet, NSCache, NSString, TICandidateSorter, NSOperationQueue;

@interface TIKeyboardInputManager_ja_JP : TIKeyboardInputManagerZephyr {

	bool _isCandidateSelectionSuppressed;
	TIWordSearch* _kbws;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	NSCache* _candidatesCache;
	NSString* _convertStringForCurrentCandidates;
	bool _isPhraseBoundarySet;
	unsigned long long _remainingInputLength;
	bool _shouldLearnAcceptedCandidate;
	bool _isEmojiFacemarkMode;
	NSString* _alternateDisplayString;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic) bool isEmojiFacemarkMode; 
@property (nonatomic,copy) NSString * alternateDisplayString;                                            //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
@property (readonly) TICandidateSorter * candidateSorter;                                                //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                                                  //@synthesize candidatesCache=_candidatesCache - In the implementation block
+(id)sortTitleFromSort:(unsigned long long)arg1 ;
+(unsigned long long)sortFromSortTitle:(id)arg1 ;
+(bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)operationQueue;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(bool)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(bool)usesAutoDeleteWord;
-(unsigned)inputCount;
-(bool)supportsSetPhraseBoundary;
-(id)searchStringForMarkedText;
-(id)inputString;
-(bool)shouldExtendPriorWord;
-(unsigned)inputIndex;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/ id)arg3 ;
-(bool)suppressCompletionsForFieldEditor;
-(bool)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(unsigned long long)phraseBoundary;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(bool)canHandleKeyHitTest;
-(bool)needsKeyHitTestResults;
-(id)initWithInputMode:(id)arg1 ;
-(id)wordCharacters;
-(bool)shouldAddModifierSymbolsToWordCharacters;
-(void)setIsEmojiFacemarkMode:(bool)arg1 ;
-(void)setAlternateDisplayString:(id)arg1 ;
-(void)_addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 ;
-(void)_cancelCandidatesThread;
-(bool)isEmojiFacemarkMode;
-(void)_deleteFromInput;
-(id)_inputString;
-(id)alternateDisplayString;
-(id)_convertString;
-(unsigned long long)actualInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(bool)shouldSendToTIWordSearch:(id)arg1 ;
-(void)makeCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(bool)arg2 ;
-(id)candidatesWithSyntheticStrings:(id)arg1 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(id)_candidatesWithSyntheticStrings:(id)arg1 force:(bool)arg2 ;
-(bool)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(id)candidateSorter;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(unsigned long long)remainingInputLengthOfString:(id)arg1 index:(unsigned long long)arg2 candidate:(id)arg3 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(id)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(void)loadAddressBook;
-(id)candidatesCache;
-(void)setAutoCorrects:(bool)arg1 ;
-(void)setCandidatesCache:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(void)loadDictionaries;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(bool)arg2 ;
-(void)loadFavoniusLanguageModel;
-(void)acceptInput;
-(void)setLearnsCorrection:(bool)arg1 ;
-(void)clearDynamicDictionary;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(bool)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)inputLocationChanged;
-(id)geometryModelData;
-(bool)isPartialCandidate;
-(id)rawInputString;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(void)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/ id)arg3 ;
@end

