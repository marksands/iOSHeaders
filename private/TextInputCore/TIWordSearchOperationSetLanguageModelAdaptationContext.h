//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
}

@property(copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)perform;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;

@end

