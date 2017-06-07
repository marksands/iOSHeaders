//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet;

@interface HDReadAuthorizationStatus : NSObject
{
    _Bool _isAuthorized;
    NSSet *_restrictedSourceEntities;
    NSNumber *_authorizationAnchor;
}

@property(readonly, copy, nonatomic) NSNumber *authorizationAnchor; // @synthesize authorizationAnchor=_authorizationAnchor;
@property(readonly, copy, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(readonly, nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
- (void).cxx_destruct;
- (id)initWithReadAuthorizationStatus:(_Bool)arg1 restrictedSourceEntities:(id)arg2 authorizationAnchor:(id)arg3;

@end

