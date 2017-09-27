//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KCAESGCMDuplexSession, NSObject<KCJoiningRequestCircleDelegate>;

@interface KCJoiningRequestCircleSession : NSObject
{
    int _state;
    NSObject<KCJoiningRequestCircleDelegate> *_circleDelegate;
    KCAESGCMDuplexSession *_session;
}

+ (id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id *)arg3;
@property int state; // @synthesize state=_state;
@property(readonly) KCAESGCMDuplexSession *session; // @synthesize session=_session;
@property(readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate; // @synthesize circleDelegate=_circleDelegate;
- (void).cxx_destruct;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (_Bool)isDone;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)handleCircleBlob:(id)arg1 error:(id *)arg2;
- (id)initialMessage:(id *)arg1;
- (id)encryptedPeerInfo:(id *)arg1;

@end

