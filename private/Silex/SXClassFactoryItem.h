//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXClassFactoryItem : NSObject
{
    NSString *_typeString;
    Class _baseClass;
    Class _itemClass;
}

@property(nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) Class baseClass; // @synthesize baseClass=_baseClass;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

