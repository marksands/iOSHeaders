//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INSpeakable.h"
#import "INSpeakableStringExport.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSSecureCoding>
{
    NSString *_spokenPhrase;
    NSString *_pronunciationHint;
    NSString *_vocabularyIdentifier;
    NSArray *_alternativeSpeakableMatches;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *alternativeSpeakableMatches; // @synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches;
@property(retain, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(retain, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(retain, nonatomic) NSString *spokenPhrase; // @synthesize spokenPhrase=_spokenPhrase;
- (void).cxx_destruct;
- (id)spokenPhrases;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)_effectiveNSStringValue;
- (id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4;
- (id)initWithSpokenPhrase:(id)arg1;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

