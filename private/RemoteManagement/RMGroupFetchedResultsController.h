//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSFetchedResultsController, NSString;

@interface RMGroupFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate>
{
    id <RMGroupFetchedResultsControllerDelegate> _delegate;
    NSFetchedResultsController *_resultsController;
    NSArray *_resultsControllers;
    NSArray *_resultsRequests;
    unsigned long long _changeCounter;
}

@property(nonatomic) unsigned long long changeCounter; // @synthesize changeCounter=_changeCounter;
@property(retain, nonatomic) NSArray *resultsRequests; // @synthesize resultsRequests=_resultsRequests;
@property(retain, nonatomic) NSArray *resultsControllers; // @synthesize resultsControllers=_resultsControllers;
@property(retain, nonatomic) NSFetchedResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) __weak id <RMGroupFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_evaluateCounter;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)initWithResultsRequests:(id)arg1 cacheName:(id)arg2 managedObjectContext:(id)arg3;
- (id)initWithContext:(id)arg1 resultsRequests:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

