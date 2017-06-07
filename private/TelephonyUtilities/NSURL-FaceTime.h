//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FaceTime)
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
- (_Bool)isShowInCallUIURL;
- (_Bool)isLaunchForIncomingCallURL;
- (_Bool)isDialCallURL;
- (_Bool)hasNoPromptOption;
- (_Bool)isFaceTimeAudioPromptURL;
- (_Bool)isFaceTimeAudioURL;
- (_Bool)isFaceTimePromptURL;
- (_Bool)isFaceTimeURL;
- (_Bool)_isPhoneNumberID:(id)arg1;
- (id)faceTimeDestinationAccount;
@end

