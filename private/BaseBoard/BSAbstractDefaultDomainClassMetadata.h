//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject
{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

@property(retain, nonatomic) NSMutableDictionary *selectorToPropertyMap; // @synthesize selectorToPropertyMap=_selectorToPropertyMap;
@property(retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap; // @synthesize propertyNameToPropertyMap=_propertyNameToPropertyMap;
- (id)description;
- (void)dealloc;
- (id)init;

@end

