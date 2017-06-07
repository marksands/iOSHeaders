//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource>
{
    id <MapsSuggestionsSourceDelegate> _delegate;
    struct NSString *_uniqueName;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
@property(readonly, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
- (void).cxx_destruct;
- (id)currentBestLocation;
- (unsigned long long)deleteMyEntries:(struct NSArray *)arg1;
- (unsigned long long)addOrUpdateMySuggestionEntries:(struct NSArray *)arg1 deleteMissing:(_Bool)arg2;
- (_Bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 name:(struct NSString *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

