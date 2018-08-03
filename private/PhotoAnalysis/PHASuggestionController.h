//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_os_log>, PGManager;

@interface PHASuggestionController : NSObject
{
    PGManager *_graphManager;
    NSObject<OS_os_log> *_loggingConnection;
    NSMutableArray *_existingSuggestions;
    NSMutableArray *_existingSharingSuggestions;
    NSArray *_existingMemories;
}

+ (unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1;
@property(retain, nonatomic) NSArray *existingMemories; // @synthesize existingMemories=_existingMemories;
- (void).cxx_destruct;
- (id)collidableSuggestionsWithOptions:(id)arg1;
- (id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)collidableSuggestionsWithReferenceDate:(id)arg1 andDelay:(double)arg2 sharingSuggestionsOnly:(_Bool)arg3;
- (id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2;
- (id)commitSuggestions:(id)arg1 options:(id)arg2;
- (id)processExistingSuggestions:(id)arg1 atDate:(id)arg2 shouldPerformChanges:(_Bool)arg3;
- (_Bool)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2;
- (_Bool)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2;
- (void)processExistingSuggestionsWithOptions:(id)arg1;
@property(readonly, nonatomic) NSArray *existingSuggestions;
- (id)initWithGraphManager:(id)arg1;
- (void)recordCreatedSuggestions:(id)arg1 duringSession:(id)arg2;
- (void)recordDeletedSuggestions:(id)arg1;
- (void)recordRetiredSuggestions:(id)arg1;

@end

