//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSuggestionsObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject>
{
    _Bool _hasTracker;
    id <MapsSuggestionsStrategy> _strategy;
    long long _managerStyle;
    id <MapsSuggestionsLocationUpdater> _locationUpdater;
    NSMutableArray *_sourceClasses;
    NSMutableArray *_includeFilters;
    NSMutableArray *_includeImprovers;
    NSMutableArray *_includeDedupers;
    NSMutableArray *_excludeFilters;
    NSMutableArray *_excludeImprovers;
    NSMutableArray *_excludeDedupers;
    struct NSMutableDictionary *_titleFormatters;
}

+ (id)simpleStrategy;
+ (id)forEveryone;
+ (id)forTests;
+ (id)forSimulator;
+ (id)_forPhone;
+ (id)forDevice;
+ (id)currentEngine;
@property(retain, nonatomic) NSMutableDictionary *titleFormatters; // @synthesize titleFormatters=_titleFormatters;
@property(retain, nonatomic) NSMutableArray *excludeDedupers; // @synthesize excludeDedupers=_excludeDedupers;
@property(retain, nonatomic) NSMutableArray *excludeImprovers; // @synthesize excludeImprovers=_excludeImprovers;
@property(retain, nonatomic) NSMutableArray *excludeFilters; // @synthesize excludeFilters=_excludeFilters;
@property(retain, nonatomic) NSMutableArray *includeDedupers; // @synthesize includeDedupers=_includeDedupers;
@property(retain, nonatomic) NSMutableArray *includeImprovers; // @synthesize includeImprovers=_includeImprovers;
@property(retain, nonatomic) NSMutableArray *includeFilters; // @synthesize includeFilters=_includeFilters;
@property(retain, nonatomic) NSMutableArray *sourceClasses; // @synthesize sourceClasses=_sourceClasses;
@property(nonatomic) _Bool hasTracker; // @synthesize hasTracker=_hasTracker;
@property(retain, nonatomic) id <MapsSuggestionsLocationUpdater> locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property(nonatomic) long long managerStyle; // @synthesize managerStyle=_managerStyle;
@property(retain, nonatomic) id <MapsSuggestionsStrategy> strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (id)withManagerStyle:(long long)arg1;
- (id)build;
- (id)withTitleFormatter:(id)arg1 forType:(unsigned long long)arg2;
- (id)withSourceClasses:(id)arg1;
- (id)withoutDedupers:(id)arg1;
- (id)withDedupers:(id)arg1;
- (id)withoutImprovers:(id)arg1;
- (id)withImprovers:(id)arg1;
- (id)withoutFilters:(id)arg1;
- (id)withFilters:(id)arg1;
- (id)withoutTracker;
- (id)withLocationUpdater:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

