//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DADaemonSupport/DADClientDelegate.h>

#import "DAEventsCalendarDirectorySearchResponseConsumer.h"
#import "DASearchQueryConsumer.h"

@class NSSet, NSString;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer>
{
    NSSet *_terms;
    NSSet *_recordTypes;
    unsigned long long _resultLimit;
    id _searchID;
    _Bool _exceededResultLimit;
}

- (void).cxx_destruct;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)_convertSearchQueryResults:(id)arg1;
- (void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;
- (void)calendarDirectorySearchReturnedResults:(id)arg1;
- (void)performRequest;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

