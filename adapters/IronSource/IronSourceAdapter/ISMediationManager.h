// Copyright 2019 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
@import GoogleMobileAds;
#import <IronSource/IronSource.h>
#import "GADMAdapterIronSourceDelegate.h"

@interface ISMediationManager
    : NSObject <ISDemandOnlyRewardedVideoDelegate, ISDemandOnlyInterstitialDelegate>

+ (instancetype)sharedManager;
- (void)initIronSourceSDKWithAppKey:(NSString *)appKey forAdUnits:(NSSet *)adUnits;
- (void)requestRewardedAdWithDelegate:
    (id<ISDemandOnlyRewardedVideoDelegate, GADMAdapterIronSourceDelegate>)delegate;

- (void)presentRewardedAdFromViewController:(nonnull UIViewController *)viewController
                                   delegate:(id<ISDemandOnlyRewardedVideoDelegate,
                                                GADMAdapterIronSourceDelegate>)delegate;

- (void)requestInterstitialAdWithDelegate:
    (id<ISDemandOnlyInterstitialDelegate, GADMAdapterIronSourceDelegate>)delegate;

- (void)presentInterstitialAdFromViewController:(nonnull UIViewController *)viewController
                                       delegate:(id<ISDemandOnlyInterstitialDelegate,
                                                    GADMAdapterIronSourceDelegate>)delegate;

@end
