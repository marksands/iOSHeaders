//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, _PLDescriptionStyle;

@interface PLDescriptionBuilder : NSObject
{
    NSObject *_object;
    NSMutableString *_description;
    NSString *_separator;
    NSString *_indentString;
    _PLDescriptionStyle *_style;
}

+ (id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2;
+ (id)plainMultiLineDescriptionBuilder;
+ (id)plainDescriptionBuilder;
+ (id)descriptionBuilderWithObject:(id)arg1;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
- (id)build;
- (void)appendName:(id)arg1 typeCode:(const char *)arg2 value:(const void *)arg3;
- (void)appendName:(id)arg1 cgSize:(struct CGSize)arg2;
- (void)appendName:(id)arg1 integerValue:(long long)arg2;
- (void)appendName:(id)arg1 boolValue:(_Bool)arg2;
- (void)appendName:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3;

@end

