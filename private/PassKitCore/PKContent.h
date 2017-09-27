//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding>
{
    PKBarcode *_barcode;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)contentWithFileURL:(id)arg1;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property(retain, nonatomic) PKBarcode *barcode; // @synthesize barcode=_barcode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

