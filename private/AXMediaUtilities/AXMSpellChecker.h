//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppleSpell;

@interface AXMSpellChecker : NSObject
{
    AppleSpell *_spellChecker;
}

@property(retain, nonatomic) AppleSpell *spellChecker; // @synthesize spellChecker=_spellChecker;
- (void).cxx_destruct;
- (_Bool)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2;
- (void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2;

@end

