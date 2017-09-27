//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject
{
    struct UIEdgeInsets _borderInsets;
    _Bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic, getter=isRequired) _Bool required; // @synthesize required=_isRequired;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
- (void)dealloc;

@end

