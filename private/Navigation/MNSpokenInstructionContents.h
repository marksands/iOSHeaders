//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNListInstructionContents.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents>
{
    CDStruct_61a83fd4 _options;
    _Bool _isSecondary;
    id <GEOServerFormattedString> _proceedInstructionFormat;
    id <GEOServerFormattedString> _continueInstructionFormat;
    id <GEOServerFormattedString> _initialInstructionFormat;
    id <GEOServerFormattedString> _prepareInstructionFormat;
    NSArray *_executionInstructionFormats;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(CDStruct_61a83fd4 *)arg4 isSecondary:(_Bool)arg5;
@property(retain, nonatomic) NSArray *executionInstructionFormats; // @synthesize executionInstructionFormats=_executionInstructionFormats;
@property(retain, nonatomic) id <GEOServerFormattedString> prepareInstructionFormat; // @synthesize prepareInstructionFormat=_prepareInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> initialInstructionFormat; // @synthesize initialInstructionFormat=_initialInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> continueInstructionFormat; // @synthesize continueInstructionFormat=_continueInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> proceedInstructionFormat; // @synthesize proceedInstructionFormat=_proceedInstructionFormat;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)_instructionsForFormats:(id)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives:(id *)arg1;
@property(nonatomic) long long context;
@property(readonly, nonatomic) int numSignsWanted;
- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool suppressFallback;
@property(nonatomic) _Bool suppressNames;

@end

