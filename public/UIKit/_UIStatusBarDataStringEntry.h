//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataStringEntry : _UIStatusBarDataEntry
{
    NSString *_stringValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)entryWithStringValue:(id)arg1;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initFromData:(const CDStruct_8a690d05 *)arg1 type:(int)arg2 string:(const char *)arg3 maxLength:(int)arg4;

@end

