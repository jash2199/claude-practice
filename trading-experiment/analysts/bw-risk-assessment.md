# BW Risk Assessment — Risk Management Report
**Date: 2026-08-05 (~10:42 ET, Wednesday)**

*Persona: Bridgewater-style risk analyst for the "Claude Robinhood Trader" experiment — radical transparency, no softened warnings. Portfolio scope: $50 base + accumulated profits inside a ~$100 Robinhood cash account (424593861). All figures below are live Robinhood-verified (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` pulled this run) — not WebSearch-sourced, per house rule 4.*

---

## OVERALL PORTFOLIO RISK GRADE: **C-** (held, unchanged from 8/3-8/4)

## Single biggest risk right now
**80.6% of equity (NVDA + VTI + VXUS) is riding one unconfirmed, historically-fragile narrative.** All three have rallied into fresh cycle highs this week on Hormuz de-escalation optimism that is *still not a signed deal* — Iran's Supreme Leader has not yet approved it, and the original June 17 MOU already collapsed once under the same "final stages" framing now being used again ([Al Jazeera](https://www.aljazeera.com/news/2026/8/5/iran-oman-us-close-to-hormuz-deal-what-do-they-all-want), [CNN](https://www.cnn.com/2026/08/05/middleeast/hormuz-iran-oman-agreement-analysis-intl)). Meanwhile XLE — the position this book explicitly sized to hedge a Hormuz shock — has round-tripped and is essentially flat (-0.22% vs. avg cost), providing almost no offset today. If the deal slips or collapses again, three positions that moved together on the way up have no structural reason to move apart on the way down.

---

## Live portfolio snapshot (Robinhood-verified, this run)

| Position | Qty | Price | Value | % of Equity | % of Pool ($50.37) | Avg Cost | Unrealized P&L |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $220.215 | $5.47 | 11.79% | 10.85% | $201.40 | +9.35% (+$0.47) |
| VTI | 0.048530 | $381.847 | $18.53 | 39.96% | 36.79% | $370.90 | +2.95% (+$0.53) |
| VXUS | 0.154525 | $86.710 | $13.40 | 28.89% | 26.60% | $84.13 | +3.08% (+$0.40) |
| OMCL | 0.106405 | $37.565 | $4.00 | 8.62% | 7.94% | $46.99 | **-20.04% (-$1.00)** |
| XLE | 0.086775 | $57.495 | $4.99 | 10.76% | 9.90% | $57.62 | -0.22% (-$0.01) |
| **Equity total** | | | **$46.37** | 100% | 92.06% | | |
| Cash (deployable, pool-level) | | | $4.00 | — | 7.94% | | |
| Cash (off-limits reserve) | | | $50.00 | — | — | | |
| **Account total** | | | **$100.37** | | | | |

Note: NVDA+OMCL "official" combined concentration trigger reads 20.41% of equity — a round-number touch, still under the formal 18-20% NVDA-alone trigger (NVDA-alone is 11.79%). See Single-stock risk section below for why this face-value framing understates the real number.

---

## Correlation analysis

- **NVDA / VTI / VXUS are moving as one trade, not three.** All three hit fresh cycle highs this week on the same Hormuz-optimism/broad-risk-on tape (Palantir, AMD, SpaceX earnings tailwind layered on top). Their day-to-day correlation over the past week has been visibly elevated versus their historical norm — a genuine diversifier should decouple sometimes; this week it hasn't.
- **OMCL and XLE are the book's only real decorrelation assets, and both are currently underwater or flat.** OMCL's -20% is idiosyncratic (post-earnings guidance-driven, not macro), which is exactly the point — it is *not* moving with the other three. XLE is supposed to be the anti-correlated hedge against the same Hormuz story driving NVDA/VTI/VXUS higher, but oil has been chopping sideways (bounced ~5% off Tuesday's low to ~$83.72 even as de-escalation headlines get louder — GS flagged this exact inconsistency this morning), so XLE isn't cleanly hedging right now either.
- **Look-through correlation is worse than the five-ticker view suggests.** NVDA is a top-weight holding inside VTI itself (~6-7% of VTI's basket by standard mega-cap weighting). That means the book's "11.79% direct" framing undercounts true NVDA exposure — direct NVDA plus NVDA embedded in VTI plus a small remainder in VXUS runs closer to **~14% of equity**, not 11.79%. Combined with OMCL's 8.62% (a high-multiple healthcare-growth name that shares NVDA's core risk factor — sensitivity to the discount rate — even though it's a different sector), true correlated growth/multiple exposure is closer to **~23% of equity**, materially closer to the formal 18-20% trigger band than the official NVDA-alone reading implies.

## Sector concentration risk (look-through, blending direct holdings + fund-level weights)

| Sector | Estimated % of equity | Source |
|---|---|---|
| Technology | **~32-33%** | Direct NVDA (11.79%) + VTI look-through (~34.6-36.3% tech per [IndexBox](https://www.indexbox.io/blog/vanguard-total-stock-market-etf-vti-a-2026-investment-analysis/)/[InvestSnips](https://investsnips.com/vti-holdings/)) + VXUS look-through (22.59% tech per [MarketXLS](https://marketxls.com/etfs/vxus/geography)) |
| Healthcare | ~15% | OMCL (8.62%) + VTI/VXUS healthcare look-through (~7-11%) |
| Energy | ~12% | XLE (10.76%) + VXUS energy look-through (4.28%) |
| Financials | ~12% | VTI + VXUS financials look-through (VXUS alone is 22.16% financials) |
| Industrials | ~8% | VTI + VXUS look-through (VXUS industrials 15.2%) |
| All other sectors | ~21% | Remainder, diffuse across consumer, materials, comms, utilities, real estate |

**Verdict: technology is a full third of the book on a look-through basis, roughly 3x its face-value 11.79% direct-NVDA reading.** This is not a new problem this book created today, but it is materially larger than the "we only hold one tech name directly" framing suggests, and it's concentrated in exactly the theme (AI capex, chip demand) that MS's DCF says is ~31.4% overvalued on NVDA alone.

## Geographic exposure and currency risk

- **US exposure: ~71% of equity** (NVDA + OMCL + XLE direct, all US-listed/domiciled, plus VTI's 100% US mandate).
- **Ex-US exposure: ~28.9% of equity**, entirely via VXUS — unhedged. Top country weights: Japan 15.1%, UK 8.1%, Canada 8.1%, Taiwan 5.9%, Switzerland 5.1% ([MarketXLS](https://marketxls.com/etfs/vxus/geography)).
- **Currency risk is real, if small in dollar terms (~$13.40 exposed).** A meaningful USD rally (plausible if the Hormuz deal resolves cleanly and risk-off unwinds toward the dollar) would be a headwind to VXUS returns independent of the underlying stocks' local performance. No FX hedge exists or is warranted at this size — flagging for completeness, not as an action item.
- **Taiwan (5.9% of VXUS) is worth a specific note**: it layers semiconductor/geopolitical (Taiwan Strait) risk on top of the book's existing AI-chip concentration (NVDA) and Middle East concentration (XLE/OMCL-adjacent macro) — a third, distinct geopolitical fault line the book is quietly exposed to that no analyst desk has explicitly named yet this cycle.

## Interest rate sensitivity

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | ~40x+ forward multiple; MS's DCF (WACC 11%) shows the valuation gap directly tracks discount-rate assumptions |
| OMCL | **High** | Small-cap growth healthcare-IT name; financing-cost and multiple-compression sensitive, same channel as NVDA |
| VTI | **Moderate-High** | ~33-36% tech-weighted; the fund's duration is pulled up by its mega-cap growth names |
| VXUS | **Moderate** | More value-tilted (financials 22%, industrials 15% vs. VTI's growth tilt) — genuinely lower duration than the US core |
| XLE | **Low / inverse** | Value sector, historically benefits from a higher-for-longer or inflationary rate regime rather than being hurt by it |

**Standing gap, reaffirmed:** this book still has no explicit rate-shock playbook (flagged 7/31, unresolved). Four of five positions (NVDA, OMCL, VTI, and to a lesser extent VXUS) sit on the same side of a renewed rate-shock trade. Only XLE would likely act as ballast, and its own hedge value is currently muted (see Correlation section).

## Recession stress test

Estimated peak-to-trough drawdown per position in a moderate-to-severe recession scenario (blended demand-driven + valuation-reversion case, not a pure geopolitical-supply shock):

| Position | Estimated drawdown | Rationale |
|---|---|---|
| NVDA | -45% to -55% | High-beta semis; AI capex is discretionary corporate spend, cut hard and fast in a downturn; already ~31% "overvalued" per MS DCF before any recession discount |
| OMCL | -35% to -45% | Small-cap; hospital/health-system capex is deferrable; already -20% and thin-book |
| VTI | -30% to -35% | Broad market but tech-tilted, worse than a historical S&P-average bear |
| VXUS | -25% to -30% | Somewhat lower beta, value-tilted, but unhedged FX could compound in a dollar-flight scenario |
| XLE | **-30% to -45% in a demand recession; could instead *rally* in a supply/geopolitical-driven downturn** | This is the critical nuance: XLE only hedges *supply-side* shocks (Hormuz). In a classic demand-driven recession, oil demand falls and XLE falls with everything else — the hedge fails exactly when a "normal" recession hits |

**Blended equity-sleeve estimate: ~-34%** (equity-weighted). Applied to the $46.37 equity sleeve, that's roughly **-$15.8**, bringing account total value to **~$84.6, an approximate -15.7% whole-account drawdown** — meaningfully cushioned by the ~54% cash allocation (of which $50 is untouched reserve), but the equity sleeve itself would take a much harder hit than the whole-account number implies. Do not let the cash-cushioned headline number understate what a recession does to the deployed capital specifically.

## Liquidity risk rating

| Position | Rating | Notes |
|---|---|---|
| VTI | Very Low | Mega-cap ETF, billions in AUM, penny-wide spreads |
| VXUS | Very Low | Same profile as VTI |
| XLE | Very Low | Large sector SPDR, deep liquidity |
| NVDA | Very Low | Mega-cap, among the most liquid single names on the market |
| OMCL | **Low-Moderate** | Small/mid-cap; state.md's own run notes have repeatedly attributed unexplained OMCL intraday moves to "thin-book noise" with no company-specific catalyst — the one name where a large order (irrelevant at this book's size, but worth flagging structurally) could move the tape |

At this book's position sizes ($4-19 per holding), liquidity risk is immaterial to execution — flagging for completeness per mandate, not as a live concern.

## Single-stock risk and position sizing recommendations

- **NVDA (11.79% direct / ~14% look-through):** Under the formal 18-20% trigger on a face-value basis, but the real number is closer to the danger zone once VTI's embedded NVDA weight is counted. **Recommendation: do not treat "NVDA-alone under 18%" as clean cover for adding to VTI or NVDA further; track the look-through figure, not just the direct one.**
- **VTI (39.96% of equity):** This is the sizing story the book has been under-weighting for over a week. BR's own target is 30%; VTI is now **~10pp overweight and has been for multiple sessions with no active decision to trim, purely because "no fresh catalyst" (rule 1) has kept it untouched.** Rule 1 is designed to stop reactive selling, not to justify indefinite passive overweight — this desk flags that distinction explicitly: the absence of a sell catalyst is not the same as an absence of a sizing risk. **Recommendation: direct 100% of the next new deployable dollar away from VTI/VXUS core until the gap closes; if it doesn't close organically within another 1-2 weeks, this desk recommends an active trim be put on the table, not left to drift.**
- **OMCL (8.62%, -20.04%):** Correctly not sized further without the standing MS/BW post-transcript sign-off. Position is already half-size; no reduction recommended — the loss is idiosyncratic and doesn't threaten the account at this size ($1.00 of unrealized loss).
- **XLE (10.76%, -0.22%):** Appropriately sized as a half-position satellite. No change recommended, but see Recession stress test — its hedge value is real only against a supply-side shock, not a demand-driven one.
- **Deployable cash ($4.00, 7.94% of pool):** This is too thin to be a genuine risk buffer. The pool has been fully-deployed-minus-$4 for multiple weeks running. **Recommendation: as the pool grows, prioritize rebuilding deployable cash toward >10% of pool before adding a third satellite position, rather than staying perpetually capital-constrained.**

## Tail risk scenarios (probability estimates, next 1-4 weeks)

| Scenario | Probability | Portfolio impact |
|---|---|---|
| Hormuz deal signs cleanly | ~40-45% | Oil extends lower, XLE down another 10-15%; NVDA/VTI/VXUS likely extend gains further — the correlated-narrative risk realizes in the "good" direction, but XLE (the hedge) takes the loss alone |
| Hormuz deal slips again / re-escalates (June 17 MOU already failed once under near-identical language) | ~20-25% | Oil spikes, XLE outperforms, but NVDA/VTI/VXUS likely sell off together on risk-off — the single biggest risk named at the top of this report |
| "Headline deal, messy implementation" (BW/BR's own newly-flagged middle scenario) | ~30-35% | Choppy, directionless tape; no clean winner; XLE continues to underperform as a hedge without a clear payoff either way |
| NVDA/AI-capex multiple-compression shock, independent of Hormuz (MS DCF already shows ~31.4% downside) | ~15-20% | NVDA -15%+ on its own, would also pressure VTI given its tech weight; OMCL/XLE largely unaffected (genuine diversification working as designed) |
| Rate-shock resurgence (10-yr yield spike, no playbook exists per 7/31 finding) | ~15-20% | Hits NVDA, VTI, OMCL simultaneously through a channel this book has not built a rule for; XLE the only likely beneficiary |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **Correlated single-narrative unwind (NVDA+VTI+VXUS, 80.6% of equity):** No options available, and capital-constrained ($4 deployable) rules out building a new defensive position today. The available hedge is behavioral: hold the line on rule 2 (don't chase any of the three further at fresh highs) and prioritize the next new dollar toward a genuine decorrelator — GEHC remains the standing, still-unvetted candidate BW has flagged repeatedly as both a sector and rate-duration diversifier. Get it through rule 6 cross-vetting rather than continuing to re-flag it unactioned.
2. **VTI structural overweight (39.96% vs. 30% target):** The cleanest available hedge is a deliberate rebalancing trim, not a new position — reducing VTI toward target and redeploying into the underweight satellite sleeve (XLE, OMCL, or a future GEHC) directly lowers both the single-fund concentration and, since VTI is the most tech-heavy holding, the look-through tech exposure in one move.
3. **Look-through growth/multiple-compression exposure (~23% NVDA+OMCL combined, both high-multiple names sharing a discount-rate risk factor):** Equities-only hedge here is a genuine value/low-duration add — XLE already serves this role and is under-loved relative to its diversification value; this desk recommends resisting any temptation to trim XLE on its recent flat/negative performance, since giving it up removes one of only two assets in the book not correlated with the growth/multiple-compression factor.

## Rebalancing suggestions

| Position | Current % of equity | Suggested action |
|---|---|---|
| VTI | 39.96% | Trim toward BR's 30% target over time; no forced sell today (no fresh catalyst), but stop treating "no catalyst" as license to let the gap widen further |
| VXUS | 28.89% | Near-target (BR ~25-30% range); hold |
| NVDA | 11.79% (~14% look-through) | Hold; do not add — track the look-through figure against the 18-20% trigger, not just the direct one |
| OMCL | 8.62% | Hold; no add without the standing MS/BW post-transcript sign-off |
| XLE | 10.76% | Hold; do not add (MS's gate remains unmet at ~19-21% overvaluation) and do not trim (hedge value, even if muted right now, is real) |
| Deployable cash | 7.94% of pool | Target >10% of pool before any third satellite position is added |

---

## Bottom line

No structural break in the book today — no solvency issue, no single position large enough to threaten the account, and the team's existing discipline (rules 1-10) is being applied correctly. The grade holds at **C-**, not lower, because nothing has gotten structurally worse since 8/3-8/4. But this desk is not going to soften the two things that *have* been true and unaddressed for over a week: **(1)** 80.6% of equity is riding one unconfirmed geopolitical narrative that has already failed once before under nearly identical language, with the book's designated hedge (XLE) currently providing almost no offset, and **(2)** VTI has been ~10 percentage points overweight its own stated target for multiple sessions running, with "no fresh catalyst" doing double duty as both the correct reason not to panic-sell and an increasingly convenient excuse not to actively manage the position. Neither is an emergency. Both are risks sitting in plain sight that this book has chosen, repeatedly, not to act on.
