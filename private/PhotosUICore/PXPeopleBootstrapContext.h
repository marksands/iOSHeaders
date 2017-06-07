//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXPeopleNameSelection, PXPeopleSuggestionManager;
@protocol PXPeopleSuggestionManagerDataSource, PXPerson;

@interface PXPeopleBootstrapContext : NSObject
{
    _Bool _skipInitialAction;
    _Bool _wantsNaming;
    id <PXPerson> _sourcePerson;
    id <PXPerson> _targetPerson;
    unsigned long long _bootstrapType;
    PXPeopleNameSelection *_nameSelection;
    PXPeopleSuggestionManager *_suggestionManager;
    CDUnknownBlockType _preCommitBlock;
    CDUnknownBlockType _cancelBlock;
    id <PXPeopleSuggestionManagerDataSource> _prefetchedDataSource;
}

+ (id)contextWithPerson:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> prefetchedDataSource; // @synthesize prefetchedDataSource=_prefetchedDataSource;
@property(nonatomic) _Bool wantsNaming; // @synthesize wantsNaming=_wantsNaming;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType preCommitBlock; // @synthesize preCommitBlock=_preCommitBlock;
@property(nonatomic) _Bool skipInitialAction; // @synthesize skipInitialAction=_skipInitialAction;
@property(retain) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain) PXPeopleNameSelection *nameSelection; // @synthesize nameSelection=_nameSelection;
@property unsigned long long bootstrapType; // @synthesize bootstrapType=_bootstrapType;
@property(retain) id <PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;
@property(retain) id <PXPerson> sourcePerson; // @synthesize sourcePerson=_sourcePerson;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (id)init;

@end

