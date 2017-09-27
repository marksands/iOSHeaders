//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ICQLink : NSObject
{
    NSString *_text;
    long long _options;
    long long _action;
    NSDictionary *_parameters;
}

+ (_Bool)performAction:(long long)arg1 parameters:(id)arg2 options:(long long)arg3;
+ (id)linkWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
+ (id)linkWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)performActionWithOptions:(long long)arg1;
- (_Bool)performAction;
- (id)debugDescription;
- (id)initWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
- (id)initWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (id)init;

@end

