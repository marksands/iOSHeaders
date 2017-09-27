//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import "NSSecureCoding.h"
#import "OKActionPanExports.h"

@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding>
{
    unsigned long long _direction;
    struct CGPoint _translation;
    struct CGPoint _velocity;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)panActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

