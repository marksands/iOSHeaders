//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<SGSuggestionsServiceEventsProtocol>;

@interface CalSuggestionsProvider : NSObject
{
    _Bool _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

+ (id)defaultProvider;
@property(retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // @synthesize service=_service;
@property(nonatomic) _Bool suggestionsFrameworkAvailable; // @synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable;
- (void).cxx_destruct;
- (_Bool)eventsFoundInMailEnabled;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (id)fakeSGRecordID;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (void)_loadSuggestionsFramework;
- (id)init;

@end

