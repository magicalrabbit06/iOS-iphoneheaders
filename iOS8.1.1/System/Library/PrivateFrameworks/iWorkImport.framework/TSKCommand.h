/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSKPersistentUndoRedoState;
@class TSKCommandContainer, TSPObject, TSKCommandController;

@interface TSKCommand : TSPObject {

	TSKCommandContainer* _persistedUndoCollectionContainer;
	TSKCommandContainer* _currentUndoCollectionContainer;
	TSPObject*<TSKPersistentUndoRedoState> _undoRedoState;
	TSKCommandController* _commandController;

}

@property (nonatomic,retain) TSPObject*<TSKPersistentUndoRedoState> undoRedoState; 
@property (assign,nonatomic) TSKCommandController * commandController;                          //@synthesize commandController=_commandController - In the implementation block
+(id)commandFromArrayOfCommands:(id)arg1 ;
-(BOOL)isCommandObject;
-(void)saveToArchive:(CommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const CommandArchive*)arg1 unarchiver:(id)arg2 ;
-(void)beginCollectingUndo;
-(void)performIndirectCommand:(id)arg1 ;
-(id)stopCollectingUndo;
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(TSKCommandController *)commandController;
-(TSPObject*<TSKPersistentUndoRedoState>)undoRedoState;
-(void)setUndoRedoState:(TSPObject*<TSKPersistentUndoRedoState>)arg1 ;
-(void)setCommandController:(TSKCommandController *)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(BOOL)shouldRunSynchronously;
-(void)coalesceWithCommand:(id)arg1 ;
-(BOOL)canImplicitlyGroupWithCommand:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)initWithContext:(id)arg1 ;
-(BOOL)process;
-(id)actionString;
@end
