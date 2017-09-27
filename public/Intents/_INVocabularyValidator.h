//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _INVocabularyValidator : NSObject
{
}

+ (void)initialize;
- (unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1;
- (void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2;
- (id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3 withItemFactory:(CDUnknownBlockType)arg4;
- (id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3;
- (id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3;
- (id)_intentsUsingVocabularyType:(long long)arg1;

@end

