//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation
{
    void *_mecabraCandidate;
    _Bool _partialCandidate;
    TIMecabraEnvironment *_mecabraEnvironment;
}

@property(nonatomic, getter=isPartialCandidate) _Bool partialCandidate; // @synthesize partialCandidate=_partialCandidate;
@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(_Bool)arg3;

@end

