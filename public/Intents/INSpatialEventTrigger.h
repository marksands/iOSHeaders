//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLPlacemark;

@interface INSpatialEventTrigger : NSObject
{
    CLPlacemark *_placemark;
    long long _event;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long event; // @synthesize event=_event;
@property(readonly) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;

@end

