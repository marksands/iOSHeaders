//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNQuickPropertyAction.h>

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction : CNQuickPropertyAction
{
    _Bool _audioOnly;
}

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)score;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;
- (id)category;
- (id)identifier;

@end

