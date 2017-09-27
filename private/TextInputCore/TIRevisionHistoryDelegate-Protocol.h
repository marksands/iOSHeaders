//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TIRevisionHistoryDelegate <NSObject>
- (struct TITokenID)addWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id *)arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id *)arg5 hasCaseInsensitiveStaticVariant:(_Bool *)arg6;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID *)arg5 hint:(int)arg6;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(_Bool)arg5;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
@end

