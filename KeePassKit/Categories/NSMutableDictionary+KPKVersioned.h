//
//  NSMutableDictionary+KPKVersioned.h
//  KeePassKit
//
//  Created by Michael Starke on 05/09/16.
//  Copyright © 2016 HicknHack Software GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (KPKVersioned)

- (instancetype)initWithVariantDictionaryData:(NSData *)data;

@property (copy, readonly) NSData *variantDictionaryData;

@end
