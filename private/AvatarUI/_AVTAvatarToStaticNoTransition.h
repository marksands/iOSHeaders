//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@interface _AVTAvatarToStaticNoTransition : AVTTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
- (void).cxx_destruct;
- (void)performTransition;
- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 logger:(id)arg4;

@end

