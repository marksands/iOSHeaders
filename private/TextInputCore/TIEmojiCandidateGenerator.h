//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TIInputMode;

@interface TIEmojiCandidateGenerator : NSObject
{
    void *m_emojiGeneratorPrimaryLanguage;
    void *m_emojiGeneratorSecondaryLanguage;
    _Bool m_didAttemptPrimaryEmojiGeneratorLoad;
    _Bool m_didAttemptSecondaryEmojiGeneratorLoad;
    _Bool m_shouldShowEmojis;
    struct __EmojiLocaleDataWrapper *m_emojiDataForPrimaryLocale;
    struct __EmojiLocaleDataWrapper *m_emojiDataForSecondaryLocale;
    _Bool m_didAttemptPrimaryLocaleForEmojiLoad;
    _Bool m_didAttemptSecondaryLocaleForEmojiLoad;
    _Bool m_isEmojiInputModeEnabled;
    NSArray *_activeInputModes;
}

@property(retain, nonatomic) NSArray *activeInputModes; // @synthesize activeInputModes=_activeInputModes;
- (void)logEmojiUsageFromCandidateBar:(id)arg1;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)arg1;
- (id)emojiReplacementCandidatesForKeyboardState:(id)arg1;
- (id)emojiReplacementCandidates:(id)arg1;
- (void)updateEmojiStatusForKeyboardState:(id)arg1;
- (void)updateForActiveInputModes:(id)arg1;
- (id)generateEmojiAdornmentCandidates:(id)arg1;
- (id)emojiAdornmentCandidates:(id)arg1;
- (id)emojiAppendCandidates:(id)arg1;
- (id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(struct __EmojiLocaleDataWrapper *)arg2 forInput:(id)arg3;
- (id)getSkinToneSensitiveEmojis:(id)arg1;
- (id)extractTokensForEmojiComputation:(id)arg1;
- (id)randomShuffle:(id)arg1;
- (id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)arg2 asReplacementCandidate:(_Bool)arg3;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray *)arg1 inArray:(id)arg2 forInputString:(id)arg3;
- (void)updateEmojiAdornmentGenerators;
- (void)updateEmojiLocale;
@property(readonly, nonatomic) TIInputMode *primaryInputMode;
- (void)dealloc;
- (id)initWithActiveInputModes:(id)arg1;

@end

