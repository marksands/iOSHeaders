//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CLKTextProvider, UIColor;

@interface NTKUpNextAccessoryDescription : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
    CLKTextProvider *_textProvider;
}

@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

